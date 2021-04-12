/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/

#import <libobjc.A.dylib/SNResult.h>

@class NSString, NSError;

@interface SNFileDeletionResult : NSObject <SNResult> {

	NSString* _fileName;
	NSError* _error;

}

@property (nonatomic,retain) NSString * fileName;                   //@synthesize fileName=_fileName - In the implementation block
@property (nonatomic,retain) NSError * error;                       //@synthesize error=_error - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setFileName:(NSString *)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(NSString *)fileName;
-(id)initWithFileName:(id)arg1 error:(id)arg2 ;
@end

