/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
*/


#import <AppleDepth/AppleDepth-Structs.h>
@class NSArray;

@interface ADEspressoBuffer : NSObject {

	SCD_Struct_AD9* _buffer;

}

@property (nonatomic,readonly) void* data; 
@property (nonatomic,readonly) NSArray * dimensions; 
@property (nonatomic,readonly) unsigned long long width; 
@property (nonatomic,readonly) unsigned long long height; 
@property (nonatomic,readonly) unsigned long long channels; 
+(id)createWithBuffer:(SCD_Struct_AD9*)arg1 ;
-(unsigned long long)width;
-(NSArray *)dimensions;
-(unsigned long long)height;
-(void*)data;
-(unsigned long long)channels;
@end

