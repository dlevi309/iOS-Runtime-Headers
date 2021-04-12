/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
*/

#import <PhotosImagingFoundation/IPAGeometryOperator.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSMutableArray;

@interface IPAGeometryOperatorSequence : IPAGeometryOperator {

	NSObject*<OS_dispatch_queue> _isolationQueue;
	NSMutableDictionary* map_identifierToOperator;
	NSMutableDictionary* map_identifierToIndex;
	NSMutableArray* _operators;

}
+(id)sequence;
+(id)sequenceWithIdentifier:(id)arg1 ;
-(id)description;
-(unsigned long long)count;
-(id)initWithIdentifier:(id)arg1 ;
-(id)transformForGeometry:(id)arg1 ;
-(BOOL)appendOperator:(id)arg1 ;
-(BOOL)replaceOperatorWithIdentifier:(id)arg1 withOperator:(id)arg2 ;
-(BOOL)removeOperatorWithIdentifier:(id)arg1 ;
-(id)subsequenceFrom:(id)arg1 to:(id)arg2 ;
@end

