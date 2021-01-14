/*
* Generated on Thursday, January 14, 2021 at 2:23:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/

#import <NotesShared/NotesShared-Structs.h>
#import <libobjc.A.dylib/CRDataType.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/CREquatable.h>

@protocol CRDataTypeCRCoding;
@class CRRegisterLatest, NSString;

@interface CROrderedSetElement : NSObject <CRDataType, NSCopying, CREquatable> {

	id<CRDataType><CRCoding> _value;
	CRRegisterLatest* _index;

}

@property (nonatomic,retain) id<CRDataType><CRCoding> value;              //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) CRRegisterLatest * index;                    //@synthesize index=_index - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)temporaryElementWithValue:(id)arg1 ;
-(CRRegisterLatest *)index;
-(id)deltaSince:(id)arg1 in:(id)arg2 ;
-(void)setDocument:(id)arg1 ;
-(void)setIndex:(CRRegisterLatest *)arg1 ;
-(void)realizeLocalChangesIn:(id)arg1 ;
-(void)mergeWith:(id)arg1 ;
-(void)setValue:(id<CRDataType><CRCoding>)arg1 ;
-(NSString *)description;
-(id)initWithProtobufSetElement:(const Dictionary_Element*)arg1 decoder:(id)arg2 ;
-(void)encodeIntoProtobufSetElement:(Dictionary_Element*)arg1 coder:(id)arg2 ;
-(void)walkGraph:(/*^block*/id)arg1 ;
-(unsigned long long)hash;
-(id)tombstone;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<CRDataType><CRCoding>)value;
-(BOOL)isEqual:(id)arg1 ;
@end

