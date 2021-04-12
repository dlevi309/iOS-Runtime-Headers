/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/


@class NSString, NSMutableArray, NSMutableDictionary;

@interface CNHeap : NSObject {

	NSString* _rawDataString;
	NSMutableArray* _heapObjects;
	NSMutableDictionary* _heapObjectsByClassAndBinary;

}

@property (retain) NSString * rawDataString;                                                 //@synthesize rawDataString=_rawDataString - In the implementation block
@property (retain) NSMutableArray * heapObjects;                                             //@synthesize heapObjects=_heapObjects - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * heapObjectsByClassAndBinary;              //@synthesize heapObjectsByClassAndBinary=_heapObjectsByClassAndBinary - In the implementation block
-(NSString *)rawDataString;
-(void)setRawDataString:(NSString *)arg1 ;
-(NSMutableArray *)heapObjects;
-(void)setHeapObjects:(NSMutableArray *)arg1 ;
-(NSMutableDictionary *)heapObjectsByClassAndBinary;
-(void)setHeapObjectsByClassAndBinary:(NSMutableDictionary *)arg1 ;
@end

