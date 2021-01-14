/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
*/

#import <AddressBookLegacy/ABVCardParser.h>

@class NSMutableDictionary, NSData;

@interface ABVCardCardDAVParser : ABVCardParser {

	NSMutableDictionary* _unknownAttributes;
	BOOL _removeExistingProperties;
	BOOL _localRecordHasAdditionalProperties;
	int _lastCropRectX;
	int _lastCropRectY;
	int _lastCropRectWidth;
	int _lastCropRectHeight;
	NSData* _lastCropRectChecksum;

}

@property (readonly) BOOL localRecordHasAdditionalProperties;              //@synthesize localRecordHasAdditionalProperties=_localRecordHasAdditionalProperties - In the implementation block
@property (readonly) int lastCropRectX;                                    //@synthesize lastCropRectX=_lastCropRectX - In the implementation block
@property (readonly) int lastCropRectY;                                    //@synthesize lastCropRectY=_lastCropRectY - In the implementation block
@property (readonly) int lastCropRectWidth;                                //@synthesize lastCropRectWidth=_lastCropRectWidth - In the implementation block
@property (readonly) int lastCropRectHeight;                               //@synthesize lastCropRectHeight=_lastCropRectHeight - In the implementation block
@property (retain,readonly) NSData * lastCropRectChecksum;                 //@synthesize lastCropRectChecksum=_lastCropRectChecksum - In the implementation block
-(BOOL)parseUID;
-(id)initWithData:(id)arg1 watchdogTimer:(id)arg2 ;
-(void)cleanUpCardState;
-(void)setLocalRecordHasAdditionalProperties:(BOOL)arg1 ;
-(void)noteLackOfValueForProperty:(unsigned)arg1 ;
-(id)defaultURLLabel;
-(BOOL)_handleUnknownTag:(id)arg1 withValue:(id)arg2 ;
-(void)noteLackOfValueForImageData;
-(id)genericLabel;
-(id)defaultADRLabel;
-(int)lastCropRectX;
-(BOOL)importToPerson:(void*)arg1 removeExistingProperties:(BOOL)arg2 ;
-(BOOL)importToGroup:(void*)arg1 removeExistingProperties:(BOOL)arg2 ;
-(void*)createRecordInSource:(void*)arg1 outRecordType:(unsigned*)arg2 ;
-(BOOL)localRecordHasAdditionalProperties;
-(int)lastCropRectY;
-(int)lastCropRectWidth;
-(int)lastCropRectHeight;
-(NSData *)lastCropRectChecksum;
-(id)defaultLabel;
-(void)dealloc;
@end

