/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
*/


@class NSString;

@interface BMDiscoverabilitySignalEvent : NSObject {

	NSString* _identifier;
	NSString* _bundleID;
	NSString* _context;

}

@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleID;                //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy,readonly) NSString * context;                 //@synthesize context=_context - In the implementation block
-(id)init;
-(id)initWithIdentifier:(id)arg1 bundleID:(id)arg2 context:(id)arg3 ;
-(NSString *)context;
-(id)description;
-(NSString *)bundleID;
-(NSString *)identifier;
@end

