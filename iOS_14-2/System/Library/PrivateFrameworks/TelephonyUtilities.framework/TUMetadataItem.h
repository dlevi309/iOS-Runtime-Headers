/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/


@class NSMutableDictionary;

@interface TUMetadataItem : NSObject {

	NSMutableDictionary* _callMetadata;

}

@property (nonatomic,readonly) NSMutableDictionary * callMetadata;              //@synthesize callMetadata=_callMetadata - In the implementation block
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
-(id)init;
-(id)metadataForProvider:(Class)arg1 ;
-(void)setMetadata:(id)arg1 forProvider:(Class)arg2 ;
-(id)description;
-(NSMutableDictionary *)callMetadata;
-(BOOL)isEmpty;
@end

