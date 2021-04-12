/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
*/

#import <AppleServiceToolkit/ASTMaterializedConnection.h>
#import <libobjc.A.dylib/ASTTestResultHandling.h>

@class NSNumber, NSString;

@interface ASTConnectionTestResult : ASTMaterializedConnection <ASTTestResultHandling> {

	NSNumber* _testId;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSNumber * testId;                   //@synthesize testId=_testId - In the implementation block
-(id)endpoint;
-(NSNumber *)testId;
-(id)initWithTestResults:(id)arg1 ;
@end

