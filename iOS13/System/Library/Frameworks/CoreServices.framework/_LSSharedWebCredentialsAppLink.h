/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/LSAppLink.h>

@class _SWCServiceDetails;

@interface _LSSharedWebCredentialsAppLink : LSAppLink {

	LSBinding* _binding;
	_SWCServiceDetails* _serviceDetails;

}

@property (nonatomic,retain) _SWCServiceDetails * serviceDetails;              //@synthesize serviceDetails=_serviceDetails - In the implementation block
@property (readonly) LSBinding* binding;                                       //@synthesize binding=_binding - In the implementation block
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(BOOL)removeAllSettingsReturningError:(id*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEnabled;
-(id)_SWCSpecifierForSettings;
-(id)_SWCSettingsReturningError:(id*)arg1 ;
-(BOOL)_setSWCSetting:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(LSBinding*)binding;
-(_SWCServiceDetails *)serviceDetails;
-(void)setServiceDetails:(_SWCServiceDetails *)arg1 ;
-(BOOL)setEnabled:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)setBrowserSettings:(id)arg1 error:(id*)arg2 ;
-(id)browserSettings;
-(BOOL)removeSettingsReturningError:(id*)arg1 ;
@end

