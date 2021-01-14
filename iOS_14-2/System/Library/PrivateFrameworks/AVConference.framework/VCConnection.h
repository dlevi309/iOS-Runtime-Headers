/*
* Generated on Thursday, January 14, 2021 at 2:25:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


#import <AVConference/AVConference-Structs.h>
@class NSDictionary;

@interface VCConnection : NSObject {

	NSDictionary* _connectionSelectionPriorities;

}
-(id)init;
-(void)dealloc;
-(long long)compare:(id)arg1 isPrimary:(BOOL)arg2 selectionPolicy:(SCD_Struct_VC90*)arg3 ;
-(id)getConnectionSelectionPriorities;
-(long long)compareInterfacePriority:(id)arg1 isPrimary:(BOOL)arg2 ;
-(long long)compareConnectionTypePriority:(id)arg1 selectionPolicy:(SCD_Struct_VC90*)arg2 ;
-(long long)compareIpVersionPriority:(id)arg1 selectionPolicy:(SCD_Struct_VC90*)arg2 ;
-(long long)compareVpnPriority:(id)arg1 selectionPolicy:(SCD_Struct_VC90*)arg2 ;
@end

