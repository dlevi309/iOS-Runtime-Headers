/*
* Generated on Thursday, January 14, 2021 at 2:28:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SensingProtocols.framework/SensingProtocols
*/

#import <SensingProtocols/SensingProtocols-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GPBUInt64Array, GPBUInt32Array, NSMutableArray, NSArray;

@interface GPBUnknownField : NSObject <NSCopying> {

	int number_;
	GPBUInt64Array* mutableVarintList_;
	GPBUInt32Array* mutableFixed32List_;
	GPBUInt64Array* mutableFixed64List_;
	NSMutableArray* mutableLengthDelimitedList_;
	NSMutableArray* mutableGroupList_;

}

@property (nonatomic,readonly) int number; 
@property (nonatomic,readonly) GPBUInt64Array * varintList; 
@property (nonatomic,readonly) GPBUInt32Array * fixed32List; 
@property (nonatomic,readonly) GPBUInt64Array * fixed64List; 
@property (nonatomic,readonly) NSArray * lengthDelimitedList; 
@property (nonatomic,readonly) NSArray * groupList; 
-(NSArray *)groupList;
-(int)number;
-(id)description;
-(unsigned long long)hash;
-(id)initWithNumber:(int)arg1 ;
-(void)addGroup:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(GPBUInt64Array *)varintList;
-(GPBUInt32Array *)fixed32List;
-(GPBUInt64Array *)fixed64List;
-(NSArray *)lengthDelimitedList;
-(unsigned long long)serializedSize;
-(void)writeToOutput:(id)arg1 ;
-(void)addVarint:(unsigned long long)arg1 ;
-(void)addFixed64:(unsigned long long)arg1 ;
-(void)addLengthDelimited:(id)arg1 ;
-(void)addFixed32:(unsigned)arg1 ;
-(void)writeAsMessageSetExtensionToOutput:(id)arg1 ;
-(unsigned long long)serializedSizeAsMessageSetExtension;
-(void)mergeFromField:(id)arg1 ;
@end

