/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <TSReading/TSPObject.h>

@class TSPDataMetadataMap, NSArray;

@interface TSPObjectSerializationMetadata : TSPObject {

	ObjectSerializationMetadata* _message;
	TSPDataMetadataMap* _identifierToDataMetadataMap;
	NSArray* _dataReferences;

}

@property (nonatomic,copy) NSArray * dataReferences;              //@synthesize dataReferences=_dataReferences - In the implementation block
-(ObjectSerializationMetadata*)message;
-(id)initWithContext:(id)arg1 ;
-(long long)tsp_identifier;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(NSArray *)dataReferences;
-(id)dataMetadataForDataIdentifier:(long long)arg1 ;
-(void)setDataMetadata:(id)arg1 forDataIdentifier:(long long)arg2 ;
-(void)setDataReferences:(NSArray *)arg1 ;
@end

