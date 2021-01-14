/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class SAMovieResolution, NSURL, NSString;

@interface SAMovieImage : AceObject <SAAceSerializable>

@property (nonatomic,retain) SAMovieResolution * resolution; 
@property (nonatomic,copy) NSURL * uri; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)image;
+(id)imageWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSURL *)uri;
-(SAMovieResolution *)resolution;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setUri:(NSURL *)arg1 ;
-(void)setResolution:(SAMovieResolution *)arg1 ;
@end

