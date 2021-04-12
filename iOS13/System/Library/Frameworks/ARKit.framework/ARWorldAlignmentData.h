/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARResultData.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface ARWorldAlignmentData : NSObject <ARResultData, NSSecureCoding> {

	unsigned long long _modifiers;
	SCD_Struct_AR1 _worldAlignmentTransform;

}

@property (assign,nonatomic) SCD_Struct_AR1 worldAlignmentTransform;                        //@synthesize worldAlignmentTransform=_worldAlignmentTransform - In the implementation block
@property (nonatomic,readonly) unsigned long long worldAlignmentModifiers; 
@property (assign,nonatomic) BOOL worldAlignmentReset; 
@property (assign,nonatomic) BOOL referenceOriginChanged; 
@property (assign,nonatomic) BOOL sessionShouldResumeCameraPosition; 
@property (assign,nonatomic) BOOL sessionShouldResumeCameraPositionAndHeading; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SCD_Struct_AR1)worldAlignmentTransform;
-(unsigned long long)worldAlignmentModifiers;
-(BOOL)referenceOriginChanged;
-(void)setReferenceOriginChanged:(BOOL)arg1 ;
-(void)setWorldAlignmentTransform:(SCD_Struct_AR1)arg1 ;
-(void)setSessionShouldResumeCameraPositionAndHeading:(BOOL)arg1 ;
-(void)setWorldAlignmentReset:(BOOL)arg1 ;
-(void)setSessionShouldResumeCameraPosition:(BOOL)arg1 ;
-(BOOL)worldAlignmentReset;
-(BOOL)sessionShouldResumeCameraPosition;
-(BOOL)sessionShouldResumeCameraPositionAndHeading;
@end

