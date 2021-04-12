/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)groupIdentifier;
-(long long)width;
-(long long)height;
-(void)setWidth:(long long)arg1 ;
-(void)setHeight:(long long)arg1 ;
-(id)encodedClassName;
@end

