/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSArray;

@interface PhotosControlCommand : NSObject {

	NSArray* _args;
	unsigned char _options;

}

@property (readonly) BOOL isVerbose; 
+(id)name;
+(id)usage;
+(id)usagesummary;
+(const char*)optstring;
+(option*)longopts;
+(long long)maximumArgs;
+(long long)minimumArgs;
+(id)abbreviations;
-(id)init;
-(id)description;
-(BOOL)processOption:(char)arg1 arg:(id)arg2 ;
-(void)outputError:(id)arg1 ;
-(void)output:(id)arg1 ;
-(id)args;
-(id)initWithArgc:(int)arg1 argv:(char**)arg2 options:(unsigned char)arg3 ;
-(BOOL)isVerbose;
-(void)willProcessOptions;
-(BOOL)processArgc:(int)arg1 argv:(char**)arg2 ;
@end

