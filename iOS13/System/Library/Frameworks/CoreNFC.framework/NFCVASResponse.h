/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreNFC.framework/CoreNFC
*/

#import <CoreNFC/CoreNFC-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NFCVASResponse : NSObject <NSCopying> {

	long long _status;
	NSData* _vasData;
	NSData* _mobileToken;

}

@property (nonatomic,readonly) long long status;                         //@synthesize status=_status - In the implementation block
@property (nonatomic,retain,readonly) NSData * vasData;                  //@synthesize vasData=_vasData - In the implementation block
@property (nonatomic,retain,readonly) NSData * mobileToken;              //@synthesize mobileToken=_mobileToken - In the implementation block
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)status;
-(id)initWithStatus:(long long)arg1 data:(id)arg2 mobileToken:(id)arg3 ;
-(NSData *)vasData;
-(NSData *)mobileToken;
@end

