/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)groupIdentifier;
-(NSURL *)uri;
-(SAMovieResolution *)resolution;
-(void)setResolution:(SAMovieResolution *)arg1 ;
-(void)setUri:(NSURL *)arg1 ;
-(id)encodedClassName;
@end

