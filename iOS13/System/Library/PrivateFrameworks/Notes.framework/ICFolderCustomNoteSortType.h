/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
*/


@class NSNumber, NSString;

@interface ICFolderCustomNoteSortType : NSObject {

	unsigned long long _order;
	unsigned long long _direction;

}

@property (assign,nonatomic) unsigned long long order;                              //@synthesize order=_order - In the implementation block
@property (assign,nonatomic) unsigned long long direction;                          //@synthesize direction=_direction - In the implementation block
@property (nonatomic,readonly) NSNumber * valueRepresentation; 
@property (nonatomic,readonly) BOOL isDefault; 
@property (nonatomic,readonly) NSString * summaryViewTitleDescription; 
+(id)folderNoteSortTypeWithOrder:(unsigned long long)arg1 direction:(unsigned long long)arg2 ;
+(unsigned long long)customOrderForGlobalSortType:(long long)arg1 ;
+(id)noteSortTypeDefaultAscending;
+(id)currentDefaultMenuItemString;
+(id)folderNoteSortTypeFromValue:(id)arg1 ;
+(unsigned long long)sortTypeOrderForTag:(unsigned long long)arg1 ;
+(unsigned long long)sortTypeDirectionForTag:(unsigned long long)arg1 ;
+(BOOL)isTagAnOrder:(long long)arg1 ;
+(BOOL)isTagADirection:(long long)arg1 ;
+(id)sortTypeOrderValues;
+(id)actionItemTitleForOrder:(unsigned long long)arg1 ;
+(id)segmentItemTitleForOrder:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(unsigned long long)order;
-(unsigned long long)direction;
-(void)setDirection:(unsigned long long)arg1 ;
-(void)setOrder:(unsigned long long)arg1 ;
-(BOOL)isAscending;
-(BOOL)isDefault;
-(id)debugStringNameForOrder:(unsigned long long)arg1 ;
-(id)stringNameForDirection:(unsigned long long)arg1 order:(unsigned long long)arg2 ;
-(id)folderNoteSortTypeByChangingOrder:(unsigned long long)arg1 ;
-(id)folderNoteSortTypeByChangingDirection;
-(NSNumber *)valueRepresentation;
-(NSString *)summaryViewTitleDescription;
-(id)currentActionItemTitle;
@end

