/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/


@class NSArray;

@interface MLAppleImageFeatureExtractorObjectPrintParameters : NSObject {

	unsigned long long _objectPrintVersion;
	NSArray* _expectedShapes;
	NSArray* _expectedKeys;

}

@property (readonly) unsigned long long objectPrintVersion;              //@synthesize objectPrintVersion=_objectPrintVersion - In the implementation block
@property (readonly) NSArray * expectedShapes;                           //@synthesize expectedShapes=_expectedShapes - In the implementation block
@property (readonly) NSArray * expectedKeys;                             //@synthesize expectedKeys=_expectedKeys - In the implementation block
-(unsigned long long)objectPrintVersion;
-(NSArray *)expectedShapes;
-(id)initObjectPrintParameters:(unsigned long long)arg1 expectedShapes:(id)arg2 expectedKeys:(id)arg3 error:(id*)arg4 ;
-(NSArray *)expectedKeys;
@end

