/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
*/

#import <PrototypeTools/PrototypeTools-Structs.h>
#import <PrototypeTools/PTSRow.h>

@protocol PTChoiceRowDataSource;
@class NSArray, NSString;

@interface PTChoiceRow : PTSRow {

	NSArray* _possibleValues;
	NSArray* _possibleTitles;
	NSArray* _possibleShortTitles;
	id<PTChoiceRowDataSource> _dataSource;
	NSString* _choiceIdentifier;

}

@property (assign,nonatomic,__weak) id<PTChoiceRowDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) NSString * choiceIdentifier;                              //@synthesize choiceIdentifier=_choiceIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * possibleValues;                                   //@synthesize possibleValues=_possibleValues - In the implementation block
@property (nonatomic,copy) NSArray * possibleTitles;                                   //@synthesize possibleTitles=_possibleTitles - In the implementation block
@property (nonatomic,copy) NSArray * possibleShortTitles;                              //@synthesize possibleShortTitles=_possibleShortTitles - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)pu_possibleValues:(id)arg1 ;
-(id)px_possibleValues:(id)arg1 ;
-(Class)tableViewCellClass;
-(id)defaultUIAction;
-(NSArray *)possibleValues;
-(long long)numberOfSections;
-(void)setPossibleTitles:(NSArray *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id<PTChoiceRowDataSource>)dataSource;
-(id)possibleValues:(id)arg1 titles:(id)arg2 ;
-(void)setDataSource:(id<PTChoiceRowDataSource>)arg1 ;
-(NSArray *)possibleTitles;
-(id)titleForSection:(long long)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(long long)numberOfRowsInSection:(long long)arg1 ;
-(id)possibleShortTitles:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setPossibleValues:(NSArray *)arg1 ;
-(BOOL)isEncodable;
-(void)setPossibleShortTitles:(NSArray *)arg1 ;
-(id)valueForRow:(long long)arg1 inSection:(long long)arg2 ;
-(id)titleForRow:(long long)arg1 inSection:(long long)arg2 ;
-(id)shortTitleForRow:(long long)arg1 inSection:(long long)arg2 ;
-(id)indexPathForValue:(id)arg1 ;
-(NSArray *)possibleShortTitles;
-(NSString *)choiceIdentifier;
-(void)setChoiceIdentifier:(NSString *)arg1 ;
@end

