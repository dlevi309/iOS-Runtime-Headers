/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <ARKitCore/ARResultDataContext.h>

@class NSArray, NSString;

@interface ARTechniqueGatherContext : NSObject <NSSecureCoding, ARResultDataContext> {

	id _parentContext;

}

@property (nonatomic,readonly) id parentContext;                    //@synthesize parentContext=_parentContext - In the implementation block
@property (nonatomic,readonly) NSArray * gatheredData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(long long)cameraPosition;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)imageData;
-(id)initWithCoder:(id)arg1 ;
-(id)parentContext;
-(id)resultDataOfClass:(Class)arg1 ;
-(id)anchorsToAdd;
-(NSArray *)gatheredData;
-(id)initWithParentContext:(id)arg1 ;
-(id)captureGatheredData;
-(id)anchorsToRemove;
@end

