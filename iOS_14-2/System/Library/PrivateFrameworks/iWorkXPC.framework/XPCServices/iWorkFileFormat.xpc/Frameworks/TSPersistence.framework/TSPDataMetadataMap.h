/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <TSReading/TSPObject.h>

@class NSMutableDictionary;

@interface TSPDataMetadataMap : TSPObject {

	NSMutableDictionary* _identifierToDataMetadata;

}
-(id)initWithContext:(id)arg1 ;
-(void)saveToMessage:(DataMetadataMap*)arg1 archiver:(id)arg2 ;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)loadFromMessage:(const DataMetadataMap*)arg1 unarchiver:(id)arg2 ;
-(id)dataMetadataForDataIdentifier:(long long)arg1 ;
-(void)setDataMetadata:(id)arg1 forDataIdentifier:(long long)arg2 ;
@end

