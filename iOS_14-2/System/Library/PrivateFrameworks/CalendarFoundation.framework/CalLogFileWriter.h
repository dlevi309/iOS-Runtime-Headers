/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
*/

#import <CalendarFoundation/CalLogWriter.h>

@class NSString;

@interface CalLogFileWriter : CalLogWriter {

	NSString* _path;
	int _fileDescriptor;
	BOOL _fileDescriptorIsValid;

}

@property (nonatomic,retain) NSString * path;                         //@synthesize path=_path - In the implementation block
@property (assign,nonatomic) int fileDescriptor;                      //@synthesize fileDescriptor=_fileDescriptor - In the implementation block
@property (assign,nonatomic) BOOL fileDescriptorIsValid;              //@synthesize fileDescriptorIsValid=_fileDescriptorIsValid - In the implementation block
-(void)write:(id)arg1 ;
-(void)setFileDescriptorIsValid:(BOOL)arg1 ;
-(BOOL)fileDescriptorIsValid;
-(void)setPath:(NSString *)arg1 ;
-(NSString *)path;
-(id)description;
-(int)fileDescriptor;
-(void)setFileDescriptor:(int)arg1 ;
-(id)initWithParameters:(id)arg1 ;
-(void)dealloc;
@end

