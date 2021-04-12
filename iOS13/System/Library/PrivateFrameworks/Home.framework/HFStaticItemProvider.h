/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/Home-Structs.h>
#import <Home/HFItemProvider.h>

@class NSSet;

@interface HFStaticItemProvider : HFItemProvider {

	BOOL _hasProvidedItems;
	NSSet* _staticItems;

}

@property (nonatomic,retain) NSSet * staticItems;                //@synthesize staticItems=_staticItems - In the implementation block
@property (assign,nonatomic) BOOL hasProvidedItems;              //@synthesize hasProvidedItems=_hasProvidedItems - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)items;
-(id)initWithItems:(id)arg1 ;
-(id)reloadItems;
-(void)setStaticItems:(NSSet *)arg1 ;
-(NSSet *)staticItems;
-(BOOL)hasProvidedItems;
-(void)setHasProvidedItems:(BOOL)arg1 ;
-(id)initWithHome:(id)arg1 items:(id)arg2 ;
@end

