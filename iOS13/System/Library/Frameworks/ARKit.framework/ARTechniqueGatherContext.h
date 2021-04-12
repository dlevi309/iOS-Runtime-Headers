/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARResultDataContext.h>

@class NSArray, NSString;

@interface ARTechniqueGatherContext : NSObject <ARResultDataContext> {

	id _parentContext;

}

@property (nonatomic,readonly) id parentContext;                    //@synthesize parentContext=_parentContext - In the implementation block
@property (nonatomic,readonly) NSArray * gatheredData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)parentContext;
-(id)imageData;
-(long long)cameraPosition;
-(id)resultDataOfClass:(Class)arg1 ;
-(id)anchorsToAdd;
-(NSArray *)gatheredData;
-(id)initWithParentContext:(id)arg1 ;
-(id)captureGatheredData;
-(id)anchorsToRemove;
@end

