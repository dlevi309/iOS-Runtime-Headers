/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
*/

#import <TouchRemote/TouchRemote-Structs.h>
#import <libobjc.A.dylib/AKAnisetteServiceProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TRSession, NSString;

@interface TRAnisetteDataProvider : NSObject <AKAnisetteServiceProtocol, NSCopying> {

	TRSession* _session;

}

@property (nonatomic,retain) TRSession * session;                   //@synthesize session=_session - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSession:(id)arg1 ;
-(void)legacyAnisetteDataForDSID:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)fetchAnisetteDataAndProvisionIfNecessary:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(TRSession *)session;
-(void)setSession:(TRSession *)arg1 ;
-(void)provisionAnisetteWithCompletion:(/*^block*/id)arg1 ;
-(void)syncAnisetteWithSIMData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)eraseAnisetteWithCompletion:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

