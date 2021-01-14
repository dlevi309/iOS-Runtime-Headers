/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/


@class NSString;

@interface TSPFeatureInfo : NSObject {

	NSString* _identifier;
	unsigned long long _readVersion;
	unsigned long long _writeVersion;

}

@property (nonatomic,readonly) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned long long readVersion;               //@synthesize readVersion=_readVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long writeVersion;              //@synthesize writeVersion=_writeVersion - In the implementation block
-(id)init;
-(unsigned long long)hash;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)readVersion;
-(id)initWithIdentifier:(id)arg1 readVersion:(unsigned long long)arg2 writeVersion:(unsigned long long)arg3 validatingValues:(BOOL)arg4 ;
-(unsigned long long)writeVersion;
@end

