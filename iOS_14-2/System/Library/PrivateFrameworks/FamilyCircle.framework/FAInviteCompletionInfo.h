/*
* Generated on Thursday, January 14, 2021 at 2:21:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
*/


@class NSArray;

@interface FAInviteCompletionInfo : NSObject {

	unsigned long long _transportType;
	NSArray* _recipients;
	unsigned long long _status;

}

@property (assign,nonatomic) unsigned long long transportType;              //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,retain) NSArray * recipients;                          //@synthesize recipients=_recipients - In the implementation block
@property (assign,nonatomic) unsigned long long status;                     //@synthesize status=_status - In the implementation block
-(NSArray *)recipients;
-(void)setRecipients:(NSArray *)arg1 ;
-(void)setTransportType:(unsigned long long)arg1 ;
-(unsigned long long)transportType;
-(void)setStatus:(unsigned long long)arg1 ;
-(unsigned long long)status;
-(id)_transportStringValue;
-(id)_completionStatusStringValue;
-(id)serverReadableDictionary;
@end

