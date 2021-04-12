/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
*/

#import <TimeSync/TSgPTPFDPtPPort.h>

@interface TSgPTPEthernetPort : TSgPTPFDPtPPort
+(id)diagnosticDescriptionForService:(unsigned)arg1 withIndent:(id)arg2 ;
+(id)iokitMatchingDictionaryForInterfaceName:(id)arg1 ;
-(void)dealloc;
-(int)portType;
-(id)initWithInterfaceName:(id)arg1 ;
-(id)initWithService:(unsigned)arg1 ;
-(id)initWithMatchingDictionary:(id)arg1 ;
-(id)_sourceAddressString;
-(id)_destinationAddressString;
@end

