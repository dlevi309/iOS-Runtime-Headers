/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/


@interface TSPReaderReferenceInfo : NSObject {

	long long _objectIdentifier;
	long long _componentIdentifier;

}

@property (nonatomic,readonly) long long objectIdentifier;                 //@synthesize objectIdentifier=_objectIdentifier - In the implementation block
@property (nonatomic,readonly) long long componentIdentifier;              //@synthesize componentIdentifier=_componentIdentifier - In the implementation block
+(id)newReferenceInfoWithObjectIdentifier:(long long)arg1 componentIdentifier:(long long)arg2 ;
-(id)init;
-(long long)objectIdentifier;
-(long long)componentIdentifier;
-(id)initWithObjectIdentifier:(long long)arg1 componentIdentifier:(long long)arg2 ;
@end

