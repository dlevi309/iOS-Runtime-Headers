/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OCXReader.h>

@class NSString;

@interface EXReader : OCXReader {

	NSString* mTemporaryDirectory;

}

@property (nonatomic,retain) NSString * temporaryDirectory; 
-(NSString *)temporaryDirectory;
-(id)read;
-(id)defaultPassphrase;
-(void)setTemporaryDirectory:(NSString *)arg1 ;
@end

