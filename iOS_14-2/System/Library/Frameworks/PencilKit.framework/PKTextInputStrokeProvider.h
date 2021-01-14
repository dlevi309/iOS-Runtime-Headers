/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <PencilKit/PKStrokeProvider.h>

@class NSNumber;

@interface PKTextInputStrokeProvider : PKStrokeProvider {

	NSNumber* _versionNumber;

}

@property (retain,readonly) NSNumber * strokeProviderVersion; 
-(id)initWithDrawing:(id)arg1 ;
-(CGPoint)centroidForSlicesWithIdentifiers:(id)arg1 ;
-(CGRect)boundsForSliceIdentifiers:(id)arg1 ;
-(CGPoint)startingPointForSlicesWithIdentifiers:(id)arg1 ;
-(BOOL)slicesWithIdentifiers:(id)arg1 significantlyOverlapRect:(CGRect)arg2 ;
-(NSNumber *)strokeProviderVersion;
-(BOOL)containsStrokeWithUUID:(id)arg1 ;
-(id)strokesForSliceIdentifiers:(id)arg1 ;
@end

