/*
* Generated on Thursday, January 14, 2021 at 2:28:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PROPlugIn.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol PROPlugInDelegate, PKPlugIn;
@class NSBundle, NSDictionary, PROPlugInGroup, NSString, NSURL;

@interface PROConcretePlugIn : PROPlugIn <NSCopying> {

	NSBundle* bundle;
	CFUUIDRef uuidRef;
	NSDictionary* infoDictionary;
	PROPlugInGroup* group;
	NSString* localizationTableName;
	NSURL* helpURL;
	id sharedInstance;
	struct {
		unsigned loadedInstanceEver : 1;
		unsigned checkedForIcon : 1;
		unsigned checkedForHelp : 1;
	}  plugInFlags;
	id<PROPlugInDelegate> delegate;
	id<PKPlugIn> pluginKitPlug;
	BOOL entirelyOutOfProcess;
	BOOL _isBlocked;
	NSString* _blockedLookupKey;

}
-(id)bundle;
-(BOOL)isBlocked;
-(id)infoDictionary;
-(id)group;
-(id)vendorName;
-(CFUUIDRef)uuid;
-(id)delegate;
-(id)className;
-(void)setIsBlocked:(BOOL)arg1 ;
-(id)uuidString;
-(void)setDelegate:(id)arg1 ;
-(id)description;
-(void)reportError:(id)arg1 ;
-(unsigned long long)hash;
-(id)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)displayName;
-(id)helpURL;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(Class)plugInClass;
-(id)plugInInstance;
-(id)pluginKitPlug;
-(id)implementedProtocols;
-(id)blockedLookupKey;
-(BOOL)isEqualToPlugIn:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 bundle:(id)arg2 delegate:(id)arg3 ;
-(void)setBlockedLookupKey:(id)arg1 pluginName:(id)arg2 version:(id)arg3 ;
-(id)sharedPlugInInstance;
-(id)apiUsedByPlugInForProtocol:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 bundle:(id)arg2 delegate:(id)arg3 pluginKitPlug:(id)arg4 ;
-(id)infoString;
@end

