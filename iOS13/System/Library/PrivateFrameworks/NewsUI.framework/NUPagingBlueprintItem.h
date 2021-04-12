/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/


@protocol NUPage;
@class NSString;

@interface NUPagingBlueprintItem : NSObject {

	id<NUPage> _page;
	NSString* _identifier;

}

@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) id<NUPage> page;                    //@synthesize page=_page - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)identifier;
-(id<NUPage>)page;
-(id)initWithPage:(id)arg1 ;
-(id)initWithPageID:(id)arg1 ;
@end

