/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreNFC.framework/CoreNFC
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface NFCNDEFMessage : NSObject <NSSecureCoding> {

	NSArray* _records;

}

@property (nonatomic,copy) NSArray * records;                          //@synthesize records=_records - In the implementation block
@property (nonatomic,readonly) unsigned long long length; 
+(BOOL)supportsSecureCoding;
+(BOOL)_validateRecords:(id)arg1 fromOriginal:(id)arg2 ;
+(id)_getPayloadsFromNDEFRecords:(id)arg1 ;
+(id)ndefMessageWithData:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)length;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)asData;
-(NSArray *)records;
-(void)setRecords:(NSArray *)arg1 ;
-(id)_initWithRecords:(id)arg1 ;
-(id)initWithEmptyNdefMessage;
-(id)initWithNDEFRecords:(id)arg1 ;
-(id)initWithNFNdefMessage:(id)arg1 ;
-(id)_getURLsFromNDEFMessage:(id)arg1 ;
@end

