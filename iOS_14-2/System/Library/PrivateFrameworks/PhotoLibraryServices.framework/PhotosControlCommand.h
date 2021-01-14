/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSArray;

@interface PhotosControlCommand : NSObject {

	NSArray* _args;
	unsigned char _options;

}

@property (readonly) BOOL isVerbose; 
+(id)usage;
+(id)name;
+(option*)longopts;
+(const char*)optstring;
+(id)usagesummary;
+(long long)maximumArgs;
+(long long)minimumArgs;
+(id)abbreviations;
-(id)args;
-(id)init;
-(void)output:(id)arg1 ;
-(id)description;
-(BOOL)processOption:(int)arg1 arg:(id)arg2 ;
-(void)outputError:(id)arg1 ;
-(id)initWithArgc:(int)arg1 argv:(char**)arg2 options:(unsigned char)arg3 ;
-(void)waitForSigInt;
-(void)willProcessOptions;
-(BOOL)processArgc:(int)arg1 argv:(char**)arg2 ;
-(void)output:(id)arg1 arguments:(char*)arg2 ;
-(void)outputError:(id)arg1 arguments:(char*)arg2 ;
-(id)dataForPathOrStdin:(id)arg1 ;
-(BOOL)writeData:(id)arg1 toPathOrStdout:(id)arg2 ;
-(BOOL)isVerbose;
@end

