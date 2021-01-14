/*
* Generated on Thursday, January 14, 2021 at 2:28:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)count;
-(id)description;
-(id)initWithIdentifier:(id)arg1 ;
-(id)transformForGeometry:(id)arg1 ;
-(BOOL)appendOperator:(id)arg1 ;
-(BOOL)replaceOperatorWithIdentifier:(id)arg1 withOperator:(id)arg2 ;
-(BOOL)removeOperatorWithIdentifier:(id)arg1 ;
-(id)subsequenceFrom:(id)arg1 to:(id)arg2 ;
@end

