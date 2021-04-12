/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSString, NSArray;

@interface FCCKMultiFetchRecordSpec : NSObject {

	BOOL _shortcut;
	NSString* _recordType;
	NSArray* _desiredKeys;
	NSArray* _fetchKeys;

}

@property (nonatomic,copy) NSString * recordType;              //@synthesize recordType=_recordType - In the implementation block
@property (nonatomic,copy) NSArray * desiredKeys;              //@synthesize desiredKeys=_desiredKeys - In the implementation block
@property (nonatomic,copy) NSArray * fetchKeys;                //@synthesize fetchKeys=_fetchKeys - In the implementation block
@property (assign,nonatomic) BOOL shortcut;                    //@synthesize shortcut=_shortcut - In the implementation block
-(NSString *)recordType;
-(void)setDesiredKeys:(NSArray *)arg1 ;
-(void)setRecordType:(NSString *)arg1 ;
-(NSArray *)desiredKeys;
-(BOOL)shortcut;
-(void)setShortcut:(BOOL)arg1 ;
-(void)setFetchKeys:(NSArray *)arg1 ;
-(NSArray *)fetchKeys;
@end

