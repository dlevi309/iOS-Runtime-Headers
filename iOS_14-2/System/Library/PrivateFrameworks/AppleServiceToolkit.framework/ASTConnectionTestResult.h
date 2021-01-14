/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
*/

#import <AppleServiceToolkit/ASTMaterializedConnection.h>
#import <libobjc.A.dylib/ASTTestResultHandling.h>

@class NSNumber, NSString;

@interface ASTConnectionTestResult : ASTMaterializedConnection <ASTTestResultHandling> {

	NSNumber* _testId;

}

@property (nonatomic,readonly) NSNumber * testId;                   //@synthesize testId=_testId - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)endpoint;
-(NSNumber *)testId;
-(id)initWithTestResults:(id)arg1 ;
@end

