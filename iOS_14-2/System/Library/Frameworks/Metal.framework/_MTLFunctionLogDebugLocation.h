/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <libobjc.A.dylib/MTLFunctionLogDebugLocation.h>

@class NSString, NSURL, MTLDebugLocation;

@interface _MTLFunctionLogDebugLocation : NSObject <MTLFunctionLogDebugLocation> {

	MTLDebugLocation* _debugLocation;
	NSURL* _URL;

}

@property (readonly) NSString * functionName; 
@property (readonly) NSURL * URL;                                   //@synthesize URL=_URL - In the implementation block
@property (readonly) unsigned long long line; 
@property (readonly) unsigned long long column; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDebugLocation:(id)arg1 ;
-(unsigned long long)column;
-(NSString *)functionName;
-(NSString *)description;
-(NSURL *)URL;
-(unsigned long long)line;
-(void)dealloc;
@end

