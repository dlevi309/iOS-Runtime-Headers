/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<PTChoiceRowDataSource>)dataSource;
-(void)setDataSource:(id<PTChoiceRowDataSource>)arg1 ;
-(void)setPossibleTitles:(NSArray *)arg1 ;
-(NSArray *)possibleTitles;
-(long long)numberOfSections;
-(long long)numberOfRowsInSection:(long long)arg1 ;
-(id)titleForSection:(long long)arg1 ;
-(BOOL)isEncodable;
-(void)setPossibleValues:(NSArray *)arg1 ;
-(void)setPossibleShortTitles:(NSArray *)arg1 ;
-(id)valueForRow:(long long)arg1 inSection:(long long)arg2 ;
-(id)possibleValues:(id)arg1 titles:(id)arg2 ;
-(id)possibleShortTitles:(id)arg1 ;
-(id)titleForRow:(long long)arg1 inSection:(long long)arg2 ;
-(id)shortTitleForRow:(long long)arg1 inSection:(long long)arg2 ;
-(id)indexPathForValue:(id)arg1 ;
-(NSArray *)possibleValues;
-(NSArray *)possibleShortTitles;
-(NSString *)choiceIdentifier;
-(void)setChoiceIdentifier:(NSString *)arg1 ;
@end

