/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AutoBugCaptureCore.framework/AutoBugCaptureCore
*/

#import <CoreData/NSManagedObject.h>

@class NSMutableArray, NSDate, NSString, DiagnosticCaseStorage;

@interface UploadRecord : NSManagedObject {

	NSMutableArray* fileURLs;

}

@property (assign,nonatomic) short environment; 
@property (nonatomic,copy) NSDate * finishTime; 
@property (assign,nonatomic) short numberOfFiles; 
@property (nonatomic,copy) NSString * operationID; 
@property (assign,nonatomic) float progress; 
@property (assign,nonatomic) short uploadState; 
@property (nonatomic,copy) NSDate * startTime; 
@property (assign,nonatomic) long long totalBytes; 
@property (assign,nonatomic) short preflightResult; 
@property (assign,nonatomic) short priority; 
@property (assign,nonatomic) BOOL allowsCellular; 
@property (nonatomic,retain) DiagnosticCaseStorage * caseStorage; 
@property (nonatomic,retain) NSMutableArray * fileURLs; 
+(id)fetchRequest;
-(void)setFileURLs:(NSMutableArray *)arg1 ;
-(NSMutableArray *)fileURLs;
@end

