/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <libobjc.A.dylib/EDKeyedObject.h>

@class CHDDataLabel, CHDMarker, OADGraphicProperties, NSString;

@interface CHDDataValueProperties : NSObject <EDKeyedObject> {

	CHDDataLabel* mDataLabel;
	CHDMarker* mMarker;
	unsigned long long mDataValueIndex;
	OADGraphicProperties* mGraphicProperties;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)dataValueProperties;
-(id)init;
-(NSString *)description;
-(long long)key;
-(id)marker;
-(id)graphicProperties;
-(void)setDataValueIndex:(unsigned long long)arg1 ;
-(void)setGraphicProperties:(id)arg1 ;
-(void)setMarker:(id)arg1 ;
-(void)setDataLabel:(id)arg1 ;
-(id)shallowCopyWithIndex:(unsigned long long)arg1 ;
-(id)dataLabel;
-(unsigned long long)dataValueIndex;
@end

