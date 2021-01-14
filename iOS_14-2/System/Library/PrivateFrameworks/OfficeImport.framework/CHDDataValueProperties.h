/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)marker;
-(long long)key;
-(id)graphicProperties;
-(void)setDataValueIndex:(unsigned long long)arg1 ;
-(void)setGraphicProperties:(id)arg1 ;
-(void)setMarker:(id)arg1 ;
-(void)setDataLabel:(id)arg1 ;
-(id)shallowCopyWithIndex:(unsigned long long)arg1 ;
-(id)dataLabel;
-(unsigned long long)dataValueIndex;
@end

