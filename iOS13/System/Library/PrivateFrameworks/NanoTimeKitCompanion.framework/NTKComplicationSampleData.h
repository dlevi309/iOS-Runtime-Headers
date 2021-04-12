/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSMutableSet, NSObject, NSString;

@interface NTKComplicationSampleData : NSObject <NSSecureCoding> {

	NSMutableDictionary* _familyToTemplate;
	NSMutableSet* _supportedFamilies;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSString* _clientID;
	NSString* _applicationID;

}

@property (copy) NSString * clientID;                   //@synthesize clientID=_clientID - In the implementation block
@property (copy) NSString * applicationID;              //@synthesize applicationID=_applicationID - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_commonInit;
-(void)setClientID:(NSString *)arg1 ;
-(NSString *)clientID;
-(NSString *)applicationID;
-(void)setApplicationID:(NSString *)arg1 ;
-(id)supportedFamilies;
-(id)initWithSupportedFamilies:(id)arg1 ;
-(id)templateForFamily:(long long)arg1 ;
-(void)setTemplate:(id)arg1 forFamily:(long long)arg2 ;
-(id)loadedFamilies;
@end

