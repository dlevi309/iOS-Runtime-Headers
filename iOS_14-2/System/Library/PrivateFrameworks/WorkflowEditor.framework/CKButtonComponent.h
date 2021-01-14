/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <WorkflowEditor/CKComponent.h>

@interface CKButtonComponent : CKComponent {

	CGSize _intrinsicSize;

}
+(id)newWithTitles:(const unordered_map<unsigned long, NSString *, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, NSString *> > >*)arg1 titleColors:(const unordered_map<unsigned long, UIColor *, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, UIColor *> > >*)arg2 images:(const unordered_map<unsigned long, UIImage *, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, UIImage *> > >*)arg3 backgroundImages:(const unordered_map<unsigned long, UIImage *, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, UIImage *> > >*)arg4 titleFont:(id)arg5 selected:(BOOL)arg6 enabled:(BOOL)arg7 action:(CKTypedComponentAction<UIEvent *>)arg8 size:(const CKComponentSize*)arg9 attributes:(const unordered_map<CKComponentViewAttribute, CKBoxedValue, std::__1::hash<CKComponentViewAttribute>, std::__1::equal_to<CKComponentViewAttribute>, std::__1::allocator<std::__1::pair<const CKComponentViewAttribute, CKBoxedValue> > >*)arg10 accessibilityConfiguration:(CKButtonComponentAccessibilityConfiguration)arg11 ;
-(CKComponentLayout*)computeLayoutThatFits:(CKSizeRange)arg1 ;
@end

