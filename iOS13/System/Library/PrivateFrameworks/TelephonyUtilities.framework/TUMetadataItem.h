/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/


@class NSMutableDictionary;

@interface TUMetadataItem : NSObject {

	NSMutableDictionary* _callMetadata;

}

@property (nonatomic,readonly) NSMutableDictionary * callMetadata;              //@synthesize callMetadata=_callMetadata - In the implementation block
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
-(id)init;
-(id)description;
-(BOOL)isEmpty;
-(id)metadataForProvider:(Class)arg1 ;
-(NSMutableDictionary *)callMetadata;
-(void)setMetadata:(id)arg1 forProvider:(Class)arg2 ;
@end

