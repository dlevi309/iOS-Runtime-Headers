/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

