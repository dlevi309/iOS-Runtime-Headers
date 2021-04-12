/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(int)type;
-(void)cancel;
-(id)initWithType:(int)arg1 enableParsec:(BOOL)arg2 ;
-(BOOL)hasBasicType;
-(id)scanString:(id)arg1 range:(SCD_Struct_DD1)arg2 query:(DDScanQueryRef)arg3 configuration:(id)arg4 ;
-(long long)jobIdentifier;
-(void)setJobIdentifier:(long long)arg1 ;
@end

