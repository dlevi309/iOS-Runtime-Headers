/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
*/

#import <AppleServiceToolkit/ASTSealablePayload.h>

@class NSNumber, NSDictionary, NSArray;

@interface ASTTestResult : ASTSealablePayload {

	NSNumber* _statusCode;
	NSDictionary* _data;
	NSArray* _files;
	double _testDuration;
	NSNumber* _allowCellularSizeThreshold;
	NSNumber* _testId;
	NSDictionary* _predicates;
	NSDictionary* _dictionary;

}

@property (nonatomic,retain) NSDictionary * predicates;                          //@synthesize predicates=_predicates - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionary;                        //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,readonly) NSNumber * testId;                                //@synthesize testId=_testId - In the implementation block
@property (nonatomic,retain) NSNumber * statusCode;                              //@synthesize statusCode=_statusCode - In the implementation block
@property (nonatomic,retain) NSDictionary * data;                                //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSArray * files;                                    //@synthesize files=_files - In the implementation block
@property (assign,nonatomic) double testDuration;                                //@synthesize testDuration=_testDuration - In the implementation block
@property (nonatomic,retain) NSNumber * allowCellularSizeThreshold;              //@synthesize allowCellularSizeThreshold=_allowCellularSizeThreshold - In the implementation block
+(id)resultWithTestId:(id)arg1 parameters:(id)arg2 ;
-(id)init;
-(NSArray *)files;
-(void)setPredicates:(NSDictionary *)arg1 ;
-(void)setStatusCode:(NSNumber *)arg1 ;
-(void)setData:(NSDictionary *)arg1 ;
-(NSNumber *)statusCode;
-(NSDictionary *)predicates;
-(NSNumber *)testId;
-(NSDictionary *)dictionary;
-(NSDictionary *)data;
-(double)testDuration;
-(void)setFiles:(NSArray *)arg1 ;
-(void)setTestDuration:(double)arg1 ;
-(id)generatePayload;
-(NSNumber *)allowCellularSizeThreshold;
-(BOOL)sealWithFileSigner:(/*^block*/id)arg1 error:(id*)arg2 ;
-(void)setAllowCellularSizeThreshold:(NSNumber *)arg1 ;
-(void)sealWithSealableFiles:(id)arg1 ;
-(void)sealWithPayload:(id)arg1 signature:(id)arg2 ;
-(id)initWithTestId:(id)arg1 parameters:(id)arg2 ;
@end

