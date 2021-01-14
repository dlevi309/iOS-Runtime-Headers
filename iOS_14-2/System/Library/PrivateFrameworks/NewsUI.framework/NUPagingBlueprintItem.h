/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<NUPage>)page;
-(unsigned long long)hash;
-(NSString *)identifier;
-(id)initWithPage:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithPageID:(id)arg1 ;
@end

