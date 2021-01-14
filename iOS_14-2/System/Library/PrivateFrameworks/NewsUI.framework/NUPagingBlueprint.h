/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/NUPaging.h>

@class NSArray, NSOrderedSet, NSString;

@interface NUPagingBlueprint : NSObject <NUPaging> {

	NSOrderedSet* _blueprintItems;

}

@property (nonatomic,retain) NSOrderedSet * blueprintItems;              //@synthesize blueprintItems=_blueprintItems - In the implementation block
@property (nonatomic,readonly) id<NUPage> firstPage; 
@property (nonatomic,readonly) id<NUPage> lastPage; 
@property (nonatomic,readonly) NSArray * allPages; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<NUPage>)lastPage;
-(NSArray *)allPages;
-(id)initWithPages:(id)arg1 ;
-(id)pageForIdentifier:(id)arg1 ;
-(id)pageBeforeForIdentifier:(id)arg1 ;
-(id)pageAfterIdentifier:(id)arg1 ;
-(void)forEachPage:(/*^block*/id)arg1 ;
-(id<NUPage>)firstPage;
-(NSOrderedSet *)blueprintItems;
-(void)setBlueprintItems:(NSOrderedSet *)arg1 ;
@end

