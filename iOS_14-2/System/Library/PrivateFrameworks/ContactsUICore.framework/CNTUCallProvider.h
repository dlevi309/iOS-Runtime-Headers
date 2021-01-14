/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/

#import <libobjc.A.dylib/CNTUCallProvider.h>
@class NSString, NSSet;


@protocol CNTUCallProvider <NSObject>
@property (nonatomic,copy,readonly) NSString * localizedName; 
@property (nonatomic,copy,readonly) NSString * bundleIdentifier; 
@property (nonatomic,readonly) BOOL supportsAudio; 
@property (nonatomic,readonly) BOOL supportsVideo; 
@property (nonatomic,copy,readonly) NSSet * supportedHandleTypes; 
@required
-(NSString *)localizedName;
-(NSSet *)supportedHandleTypes;
-(NSString *)bundleIdentifier;
-(BOOL)supportsAudio;
-(BOOL)supportsVideo;
-(id)dialRequestForHandle:(id)arg1 contact:(id)arg2 video:(BOOL)arg3;

@end


@class NSString, NSSet, TUCallProvider;

@interface CNTUCallProvider : NSObject <CNTUCallProvider> {

	TUCallProvider* _callProvider;

}

@property (nonatomic,copy) TUCallProvider * callProvider;                      //@synthesize callProvider=_callProvider - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedName; 
@property (nonatomic,copy,readonly) NSString * bundleIdentifier; 
@property (nonatomic,readonly) BOOL supportsAudio; 
@property (nonatomic,readonly) BOOL supportsVideo; 
@property (nonatomic,copy,readonly) NSSet * supportedHandleTypes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)localizedName;
-(NSSet *)supportedHandleTypes;
-(NSString *)bundleIdentifier;
-(BOOL)supportsAudio;
-(BOOL)supportsVideo;
-(TUCallProvider *)callProvider;
-(void)setCallProvider:(TUCallProvider *)arg1 ;
-(id)dialRequestForHandle:(id)arg1 contact:(id)arg2 video:(BOOL)arg3 ;
-(id)initWithCallProvider:(id)arg1 ;
@end

