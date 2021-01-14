/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SAMovieResolution : AceObject <SAAceSerializable>

@property (assign,nonatomic) long long height; 
@property (assign,nonatomic) long long width; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)resolution;
+(id)resolutionWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setHeight:(long long)arg1 ;
-(long long)width;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setWidth:(long long)arg1 ;
-(long long)height;
@end

