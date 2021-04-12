/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <libobjc.A.dylib/MPPProtobufferCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface MPMediaPredicate : NSObject <MPPProtobufferCoding, NSSecureCoding>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithProtobufferDecodableObject:(id)arg1 library:(id)arg2 ;
-(id)initWithProtobufferDecodableObject:(id)arg1 ;
-(id)protobufferEncodableObjectFromLibrary:(id)arg1 ;
-(id)protobufferEncodableObject;
-(BOOL)evaluateEntity:(id)arg1 ;
@end

