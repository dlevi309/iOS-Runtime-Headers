/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <libobjc.A.dylib/HFIconDescriptor.h>

@class NSString;

@interface HFImageIconDescriptor : NSObject <HFIconDescriptor> {

	BOOL _shouldForceLTR;
	BOOL _isDemoModeDescriptor;
	NSString* _imageIdentifier;

}

@property (assign,nonatomic) BOOL isDemoModeDescriptor;                 //@synthesize isDemoModeDescriptor=_isDemoModeDescriptor - In the implementation block
@property (nonatomic,readonly) NSString * imageIdentifier;              //@synthesize imageIdentifier=_imageIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) BOOL shouldForceLTR;                     //@synthesize shouldForceLTR=_shouldForceLTR - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)identifier;
-(NSString *)imageIdentifier;
-(id)initWithImageIdentifier:(id)arg1 ;
-(id)initWithDemoModeImageIdentifier:(id)arg1 ;
-(BOOL)shouldForceLTR;
-(id)iconDescriptorByMergingWithIconDescriptor:(id)arg1 ;
-(BOOL)isDemoModeDescriptor;
-(void)setIsDemoModeDescriptor:(BOOL)arg1 ;
@end

