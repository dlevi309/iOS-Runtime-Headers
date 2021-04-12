/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
*/

#import <libobjc.A.dylib/FLGroupViewModel.h>

@class NSMutableArray, NSString;

@interface FLGroupViewModelImpl : NSObject <FLGroupViewModel> {

	NSMutableArray* _mutableItems;
	NSString* _identifier;
	NSString* _rowTitle;
	NSString* _groupTitle;

}

@property (nonatomic,copy) NSString * identifier;                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * rowTitle;                     //@synthesize rowTitle=_rowTitle - In the implementation block
@property (nonatomic,copy) NSString * groupTitle;                   //@synthesize groupTitle=_groupTitle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addItem:(id)arg1 ;
-(NSString *)rowTitle;
-(id)items;
-(NSString *)description;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setGroupTitle:(NSString *)arg1 ;
-(NSString *)groupTitle;
-(id)initWithIdentifier:(id)arg1 ;
-(void)setRowTitle:(NSString *)arg1 ;
-(BOOL)shouldCoalesceItems;
-(BOOL)restrictionEnabled;
@end

