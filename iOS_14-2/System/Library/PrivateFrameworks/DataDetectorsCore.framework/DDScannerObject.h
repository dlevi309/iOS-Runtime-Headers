/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
*/


#import <DataDetectorsCore/DataDetectorsCore-Structs.h>
@interface DDScannerObject : NSObject {

	DDScannerRef _scanner;
	int _type;
	BOOL _hasBasicType;
	long long _jobIdentifier;

}

@property (assign,nonatomic) long long jobIdentifier;              //@synthesize jobIdentifier=_jobIdentifier - In the implementation block
-(int)type;
-(id)initWithType:(int)arg1 enableParsec:(BOOL)arg2 ;
-(BOOL)hasBasicType;
-(id)scanString:(id)arg1 range:(SCD_Struct_DD1)arg2 query:(DDScanQueryRef)arg3 configuration:(id)arg4 ;
-(long long)jobIdentifier;
-(void)setJobIdentifier:(long long)arg1 ;
-(void)cancel;
-(void)dealloc;
@end

